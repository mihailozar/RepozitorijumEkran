/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN1VIEWBASE_HPP
#define SCREEN1VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/canvas/Shape.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/canvas/Circle.hpp>

class Screen1ViewBase : public touchgfx::View<Screen1Presenter>
{
public:
    Screen1ViewBase();
    virtual ~Screen1ViewBase() {}
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
    touchgfx::Container Levi;
    touchgfx::Shape<4> shape_speed;
    touchgfx::PainterRGB565 shape_speedPainter;
    touchgfx::TextArea textArea1;
    touchgfx::TextAreaWithOneWildcard speed_txt;
    touchgfx::Container desni;
    touchgfx::Container CAN_STATUS;
    touchgfx::Box box3;
    touchgfx::Circle ecu;
    touchgfx::PainterRGB565 ecuPainter;
    touchgfx::Circle bms;
    touchgfx::PainterRGB565 bmsPainter;
    touchgfx::Circle lvpb;
    touchgfx::PainterRGB565 lvpbPainter;
    touchgfx::TextArea textArea4;
    touchgfx::TextArea textArea3;
    touchgfx::TextArea textArea5;
    touchgfx::Container VEHICLE_STATE;
    touchgfx::Box box5;
    touchgfx::TextAreaWithOneWildcard vehicle_state;
    touchgfx::Container HV;
    touchgfx::Box box4;
    touchgfx::TextArea textArea2;
    touchgfx::TextArea textArea7;
    touchgfx::TextArea textArea8;
    touchgfx::TextArea textArea9;
    touchgfx::TextAreaWithOneWildcard voltage;
    touchgfx::TextAreaWithOneWildcard temp;
    touchgfx::TextAreaWithOneWildcard soc;

    /*
     * Wildcard Buffers
     */
    static const uint16_t SPEED_TXT_SIZE = 10;
    touchgfx::Unicode::UnicodeChar speed_txtBuffer[SPEED_TXT_SIZE];
    static const uint16_t VEHICLE_STATE_SIZE = 20;
    touchgfx::Unicode::UnicodeChar vehicle_stateBuffer[VEHICLE_STATE_SIZE];
    static const uint16_t VOLTAGE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar voltageBuffer[VOLTAGE_SIZE];
    static const uint16_t TEMP_SIZE = 10;
    touchgfx::Unicode::UnicodeChar tempBuffer[TEMP_SIZE];
    static const uint16_t SOC_SIZE = 10;
    touchgfx::Unicode::UnicodeChar socBuffer[SOC_SIZE];

private:

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 12000;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // SCREEN1VIEWBASE_HPP
