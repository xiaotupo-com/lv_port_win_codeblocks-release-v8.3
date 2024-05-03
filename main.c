
/**
 * @file main
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include <stdlib.h>
#include <unistd.h>

#include "lvgl/lvgl.h"
#include "lvgl/demos/widgets/lv_demo_widgets.h"
#include "lv_drivers/win32drv/win32drv.h"

#include "lvgl/src/extra/libs/gif/lv_gif.h"

#include <windows.h>


/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void hal_init(void);
static int tick_thread(void *data);

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

void demo_obj(void)
{
    // 得到当前活跃的层
    lv_obj_t* screen = lv_scr_act();

    // 在当前屏幕上显示一个对象
    lv_obj_t* obj = lv_obj_create(screen);

    // 设置 obj 对象的位置
    lv_obj_set_pos(obj, 100,40);

    // 设置对象的宽高
    //lv_obj_set_width(obj, 400);
    //lv_obj_set_height(obj,150);
    // 同时修改宽和高
    lv_obj_set_size(obj, 400, 250);

    // 设置对象的背景颜色
    lv_obj_set_style_bg_color(obj, lv_palette_main(LV_PALETTE_BLUE), 0);
}

void demo_style(void)
{
    // 得到当前活跃的层
    lv_obj_t* screen = lv_scr_act();

    // 在当前屏幕上显示一个对象
    lv_obj_t* obj = lv_obj_create(screen);
    lv_obj_align(obj, LV_ALIGN_CENTER, 0, 0);

    // 通过样式修改对象的样式
    // 创建一个样式
    static lv_style_t style;
    lv_style_init(&style);

    lv_style_set_width(&style, 400);
    lv_style_set_height(&style, 200);
    //lv_style_set_x(&style, 100);
    //lv_style_set_y(&style, 50);
    lv_style_set_bg_color(&style, lv_palette_main(LV_PALETTE_CYAN));
    lv_style_set_radius(&style, 10);

    // 将样式和对象关联起来
    lv_obj_add_style(obj, &style, 0);
}

void demo_label(void)
{
    // 获取当前窗口
    lv_obj_t* screen = lv_scr_act();

    // 创建文本对象
    lv_obj_t* label = lv_label_create(screen);

    // 设置文本内容
    lv_label_set_text(label, "Hello,World!");

    // 设置居中对齐
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);

    // 设置 label颜色
    lv_obj_set_style_text_color(label, lv_palette_main(LV_PALETTE_CYAN), 0);

}

void demo_label_chinese(void)
{
    // 声明字体
    LV_FONT_DECLARE(source_han_sans_cn_normal_24);
    // 获取当前窗口
    lv_obj_t* screen = lv_scr_act();

    // 创建文本对象
    lv_obj_t* label = lv_label_create(screen);


    // 设置文本内容
    lv_label_set_text(label, "你好世界你好世界，小土坡有限公司，放大器，技术设计。开关启动停止!！。.");
    // 设置居中对齐
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);

    static lv_style_t style1;
    lv_style_init(&style1);

    lv_style_set_text_font(&style1, &source_han_sans_cn_normal_24);
    lv_style_set_text_color(&style1, lv_palette_main(LV_PALETTE_CYAN));
    lv_label_set_long_mode(label, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_obj_set_width(label, 200);
    lv_obj_add_style(label, &style1, 0);
}

void demo_img(void)
{
    LV_IMG_DECLARE(cmake);

    // 创建图片对象
    lv_img_t* img = lv_img_create(lv_scr_act());
    lv_img_set_src(img, &cmake);
}

void demo_gif(void)
{
    LV_IMG_DECLARE(xingqiu_gif);

    lv_obj_t* gif = lv_gif_create(lv_scr_act());
    lv_gif_set_src(gif, &xingqiu_gif);

}

void event_handle(lv_event_t* event)
{
    lv_event_code_t code = lv_event_get_code(event);

    if (code == LV_EVENT_CLICKED)
    {
        printf("Hello\n");
    }

    // 得到目标对象
    lv_obj_t* btn = lv_event_get_target(event);

    void* user_data = lv_event_get_user_data(event);
    *(int*)user_data +=1;
    printf("%d\n", *(int*)user_data);
}

void demo_button(void)
{
    lv_obj_t* screen = lv_scr_act();

    lv_obj_t* btn = lv_btn_create(screen);
    lv_obj_align(btn, LV_ALIGN_CENTER, 0, 0);
    lv_obj_t* label = lv_label_create(btn);
    lv_label_set_text(label, "Ok");
    static int i=100;

    lv_obj_add_event_cb(btn, event_handle, LV_EVENT_CLICKED, (void*)&i);
}

void demo_style_gradient(void)
{
    static lv_style_t style;
    lv_style_init(&style);
    lv_style_set_radius(&style, 5);

    lv_style_set_bg_opa(&style, LV_OPA_COVER);
    static lv_grad_dsc_t grad;
    grad.dir = LV_GRAD_DIR_VER;
    grad.stops_count = 2;
    grad.stops[0].color = lv_palette_lighten(LV_PALETTE_GREY, 1);
    grad.stops[1].color = lv_palette_main(LV_PALETTE_BLUE);

    grad.stops[0].frac = 128;
    grad.stops[1].frac = 192;

    lv_style_set_bg_grad(&style, &grad);

    lv_obj_t* obj = lv_obj_create(lv_scr_act());
    lv_obj_add_style(obj, &style, 0);
    lv_obj_center(obj);
}

void demo_style_border(void)
{
    static lv_style_t style;
    lv_style_init(&style);

    lv_style_set_radius(&style, 10);
    lv_style_set_bg_color(&style, lv_palette_lighten(LV_PALETTE_GREY, 1));

    lv_style_set_border_color(&style, lv_palette_main(LV_PALETTE_BLUE));
    lv_style_set_border_width(&style, 5);
    lv_style_set_border_side(&style, LV_BORDER_SIDE_BOTTOM | LV_BORDER_SIDE_RIGHT);

    lv_obj_t* obj = lv_obj_create(lv_scr_act());
    lv_obj_add_style(obj, &style, 0);
    lv_obj_center(obj);
}


/**********************
 *   GLOBAL FUNCTIONS
 **********************/
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int nCmdShow)
{
    /*Initialize LittlevGL*/
    lv_init();

    /*Initialize the HAL for LittlevGL*/
    lv_win32_init(hInstance, SW_SHOWNORMAL, 800, 480, NULL);

    /*Output prompt information to the console, you can also use printf() to print directly*/
    LV_LOG_USER("LVGL initialization completed!");

    /*Run the demo*/
    //lv_demo_widgets();
    //demo_obj();
    //demo_style();
    //demo_label();
    //demo_label_chinese();
    //demo_img();
    //demo_gif();
    //demo_button();
    //demo_style_gradient();
    demo_style_border();

    while(!lv_win32_quit_signal) {
        /* Periodically call the lv_task handler.
         * It could be done in a timer interrupt or an OS task too.*/
        lv_task_handler();
        usleep(10000);       /*Just to let the system breath*/
    }
    return 0;
}
