/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN9VIEWBASE_HPP
#define SCREEN9VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen9_screen/Screen9Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/canvas/Circle.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>

class Screen9ViewBase : public touchgfx::View<Screen9Presenter>
{
public:
    Screen9ViewBase();
    virtual ~Screen9ViewBase() {}
    virtual void setupScreen();
    virtual void handleKeyEvent(uint8_t key);

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::BoxWithBorder boxWithBorder1;
    touchgfx::TextArea textArea1;
    touchgfx::Box box2;
    touchgfx::TextArea pre_finished;
    touchgfx::TextArea precharg_minus;
    touchgfx::Box box3;
    touchgfx::TextArea textArea5;
    touchgfx::TextArea textArea6;
    touchgfx::BoxWithBorder boxWithBorder1_1;
    touchgfx::TextArea textArea1_1;
    touchgfx::TextArea sd_open;
    touchgfx::TextArea textArea8;
    touchgfx::TextArea textArea9;
    touchgfx::TextArea textArea10;
    touchgfx::TextArea textArea11;
    touchgfx::TextArea precharg_plus;
    touchgfx::TextArea textArea11_1;
    touchgfx::TextArea pre_notf;
    touchgfx::TextArea sd_closed;
    touchgfx::Circle circle_air_plus;
    touchgfx::PainterRGB565 circle_air_plusPainter;
    touchgfx::Circle circle_air_minus;
    touchgfx::PainterRGB565 circle_air_minusPainter;
    touchgfx::Circle circle_relay;
    touchgfx::PainterRGB565 circle_relayPainter;
    touchgfx::Circle circle_shd_cmd;
    touchgfx::PainterRGB565 circle_shd_cmdPainter;
    touchgfx::Circle circle_imd;
    touchgfx::PainterRGB565 circle_imdPainter;
    touchgfx::Circle circle_voltage;
    touchgfx::PainterRGB565 circle_voltagePainter;
    touchgfx::Circle circle_current;
    touchgfx::PainterRGB565 circle_currentPainter;

private:

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 12000;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // SCREEN9VIEWBASE_HPP
