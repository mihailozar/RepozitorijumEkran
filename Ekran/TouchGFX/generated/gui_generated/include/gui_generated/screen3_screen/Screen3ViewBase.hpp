/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN3VIEWBASE_HPP
#define SCREEN3VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen3_screen/Screen3Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/canvas/Circle.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>

class Screen3ViewBase : public touchgfx::View<Screen3Presenter>
{
public:
    Screen3ViewBase();
    virtual ~Screen3ViewBase() {}
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
    touchgfx::BoxWithBorder boxWithBorder2;
    touchgfx::TextArea textArea2;
    touchgfx::TextArea textArea2_1;
    touchgfx::TextAreaWithOneWildcard total_voltage;
    touchgfx::TextAreaWithOneWildcard currnet;
    touchgfx::Container BMS;
    touchgfx::BoxWithBorder box1_2;
    touchgfx::BoxWithBorder box3_4;
    touchgfx::BoxWithBorder box5_6;
    touchgfx::BoxWithBorder box7_8;
    touchgfx::BoxWithBorder box9_10;
    touchgfx::Container bms1;
    touchgfx::Box boxbms1;
    touchgfx::TextArea textArea5;
    touchgfx::Circle circle_bms1;
    touchgfx::PainterRGB565 circle_bms1Painter;
    touchgfx::TextAreaWithOneWildcard voltage_bms1;
    touchgfx::TextAreaWithOneWildcard temp_bms1;
    touchgfx::Container bms2;
    touchgfx::Box boxbms2;
    touchgfx::Circle circle_bms6;
    touchgfx::PainterRGB565 circle_bms6Painter;
    touchgfx::TextArea textArea5_1;
    touchgfx::TextAreaWithOneWildcard voltage_bms6;
    touchgfx::TextAreaWithOneWildcard temp_bms6;
    touchgfx::Container bms4;
    touchgfx::Box boxbms2_1;
    touchgfx::TextArea textArea5_1_1;
    touchgfx::Circle circle_bms7;
    touchgfx::PainterRGB565 circle_bms7Painter;
    touchgfx::TextAreaWithOneWildcard voltage_bms7;
    touchgfx::TextAreaWithOneWildcard temp_bms7;
    touchgfx::Container bms3;
    touchgfx::Box boxbms2_2;
    touchgfx::TextArea textArea5_1_2;
    touchgfx::Circle circle_bms2;
    touchgfx::PainterRGB565 circle_bms2Painter;
    touchgfx::TextAreaWithOneWildcard temp_bms2;
    touchgfx::TextAreaWithOneWildcard voltage_bms2;
    touchgfx::Container bms5;
    touchgfx::Box boxbms2_2_1;
    touchgfx::TextArea textArea5_1_2_1;
    touchgfx::Circle circle_bms3;
    touchgfx::PainterRGB565 circle_bms3Painter;
    touchgfx::TextAreaWithOneWildcard temp_bms3;
    touchgfx::TextAreaWithOneWildcard voltage_bms3;
    touchgfx::Container bms6;
    touchgfx::Box boxbms2_2_2;
    touchgfx::TextArea textArea5_1_2_2;
    touchgfx::Circle circle_bms8;
    touchgfx::PainterRGB565 circle_bms8Painter;
    touchgfx::TextAreaWithOneWildcard temp_bms8;
    touchgfx::TextAreaWithOneWildcard voltage_bms8;
    touchgfx::Container bms7;
    touchgfx::Box boxbms2_2_3;
    touchgfx::TextArea textArea5_1_2_3;
    touchgfx::Circle circle_bms4;
    touchgfx::PainterRGB565 circle_bms4Painter;
    touchgfx::TextAreaWithOneWildcard voltage_bms4;
    touchgfx::TextAreaWithOneWildcard temp_bms4;
    touchgfx::Container bms8;
    touchgfx::Box boxbms2_2_4;
    touchgfx::TextArea textArea5_1_2_4;
    touchgfx::Circle circle_bms9;
    touchgfx::PainterRGB565 circle_bms9Painter;
    touchgfx::TextAreaWithOneWildcard temp_bms9;
    touchgfx::TextAreaWithOneWildcard voltage_bms9;
    touchgfx::Container bms9;
    touchgfx::Box boxbms2_2_5;
    touchgfx::TextArea textArea5_1_2_5;
    touchgfx::Circle circle_bms5;
    touchgfx::PainterRGB565 circle_bms5Painter;
    touchgfx::TextAreaWithOneWildcard voltage_bms5;
    touchgfx::TextAreaWithOneWildcard temp_bms5;
    touchgfx::Container bms10;
    touchgfx::Box boxbms2_2_6;
    touchgfx::TextArea textArea5_1_2_6;
    touchgfx::Circle circle_bms10;
    touchgfx::PainterRGB565 circle_bms10Painter;
    touchgfx::TextAreaWithOneWildcard temp_bms10;
    touchgfx::TextAreaWithOneWildcard voltage_bms10;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TOTAL_VOLTAGE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar total_voltageBuffer[TOTAL_VOLTAGE_SIZE];
    static const uint16_t CURRNET_SIZE = 10;
    touchgfx::Unicode::UnicodeChar currnetBuffer[CURRNET_SIZE];
    static const uint16_t VOLTAGE_BMS1_SIZE = 10;
    touchgfx::Unicode::UnicodeChar voltage_bms1Buffer[VOLTAGE_BMS1_SIZE];
    static const uint16_t TEMP_BMS1_SIZE = 10;
    touchgfx::Unicode::UnicodeChar temp_bms1Buffer[TEMP_BMS1_SIZE];
    static const uint16_t VOLTAGE_BMS6_SIZE = 10;
    touchgfx::Unicode::UnicodeChar voltage_bms6Buffer[VOLTAGE_BMS6_SIZE];
    static const uint16_t TEMP_BMS6_SIZE = 10;
    touchgfx::Unicode::UnicodeChar temp_bms6Buffer[TEMP_BMS6_SIZE];
    static const uint16_t VOLTAGE_BMS7_SIZE = 10;
    touchgfx::Unicode::UnicodeChar voltage_bms7Buffer[VOLTAGE_BMS7_SIZE];
    static const uint16_t TEMP_BMS7_SIZE = 10;
    touchgfx::Unicode::UnicodeChar temp_bms7Buffer[TEMP_BMS7_SIZE];
    static const uint16_t TEMP_BMS2_SIZE = 10;
    touchgfx::Unicode::UnicodeChar temp_bms2Buffer[TEMP_BMS2_SIZE];
    static const uint16_t VOLTAGE_BMS2_SIZE = 10;
    touchgfx::Unicode::UnicodeChar voltage_bms2Buffer[VOLTAGE_BMS2_SIZE];
    static const uint16_t TEMP_BMS3_SIZE = 10;
    touchgfx::Unicode::UnicodeChar temp_bms3Buffer[TEMP_BMS3_SIZE];
    static const uint16_t VOLTAGE_BMS3_SIZE = 10;
    touchgfx::Unicode::UnicodeChar voltage_bms3Buffer[VOLTAGE_BMS3_SIZE];
    static const uint16_t TEMP_BMS8_SIZE = 10;
    touchgfx::Unicode::UnicodeChar temp_bms8Buffer[TEMP_BMS8_SIZE];
    static const uint16_t VOLTAGE_BMS8_SIZE = 10;
    touchgfx::Unicode::UnicodeChar voltage_bms8Buffer[VOLTAGE_BMS8_SIZE];
    static const uint16_t VOLTAGE_BMS4_SIZE = 10;
    touchgfx::Unicode::UnicodeChar voltage_bms4Buffer[VOLTAGE_BMS4_SIZE];
    static const uint16_t TEMP_BMS4_SIZE = 10;
    touchgfx::Unicode::UnicodeChar temp_bms4Buffer[TEMP_BMS4_SIZE];
    static const uint16_t TEMP_BMS9_SIZE = 10;
    touchgfx::Unicode::UnicodeChar temp_bms9Buffer[TEMP_BMS9_SIZE];
    static const uint16_t VOLTAGE_BMS9_SIZE = 10;
    touchgfx::Unicode::UnicodeChar voltage_bms9Buffer[VOLTAGE_BMS9_SIZE];
    static const uint16_t VOLTAGE_BMS5_SIZE = 10;
    touchgfx::Unicode::UnicodeChar voltage_bms5Buffer[VOLTAGE_BMS5_SIZE];
    static const uint16_t TEMP_BMS5_SIZE = 10;
    touchgfx::Unicode::UnicodeChar temp_bms5Buffer[TEMP_BMS5_SIZE];
    static const uint16_t TEMP_BMS10_SIZE = 10;
    touchgfx::Unicode::UnicodeChar temp_bms10Buffer[TEMP_BMS10_SIZE];
    static const uint16_t VOLTAGE_BMS10_SIZE = 10;
    touchgfx::Unicode::UnicodeChar voltage_bms10Buffer[VOLTAGE_BMS10_SIZE];

private:

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 12000;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // SCREEN3VIEWBASE_HPP
