/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN5VIEWBASE_HPP
#define SCREEN5VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen5_screen/Screen5Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/canvas/Circle.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>

class Screen5ViewBase : public touchgfx::View<Screen5Presenter>
{
public:
    Screen5ViewBase();
    virtual ~Screen5ViewBase() {}
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
    touchgfx::TextArea textArea1;
    touchgfx::TextArea textArea2;
    touchgfx::Container levi;
    touchgfx::BoxWithBorder boxWithBorder1;
    touchgfx::Container cells;
    touchgfx::Container bms1;
    touchgfx::Container cell1;
    touchgfx::BoxWithBorder boxWithBorder3;
    touchgfx::TextArea textArea3;
    touchgfx::TextAreaWithOneWildcard bms5_cell1;
    touchgfx::TextArea textArea5;
    touchgfx::Container cell2;
    touchgfx::BoxWithBorder boxWithBorder3_6;
    touchgfx::TextArea textArea3_1;
    touchgfx::TextAreaWithOneWildcard bms5_cell2;
    touchgfx::TextArea textArea5_1;
    touchgfx::Container cell4;
    touchgfx::BoxWithBorder boxWithBorder3_6_1;
    touchgfx::TextArea textArea3_1_1;
    touchgfx::TextAreaWithOneWildcard bms5_cell4;
    touchgfx::TextArea textArea5_1_1;
    touchgfx::Container cell3;
    touchgfx::BoxWithBorder boxWithBorder3_6_2;
    touchgfx::TextArea textArea3_1_2;
    touchgfx::TextAreaWithOneWildcard bms5_cell3;
    touchgfx::TextArea textArea5_1_2;
    touchgfx::Container cell3_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_1;
    touchgfx::TextArea textArea3_1_2_1;
    touchgfx::TextAreaWithOneWildcard bms5_cell5;
    touchgfx::TextArea textArea5_1_2_1;
    touchgfx::Container cell3_2;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_2;
    touchgfx::TextArea textArea3_1_2_2;
    touchgfx::TextAreaWithOneWildcard bms5_cell6;
    touchgfx::TextArea textArea5_1_2_2;
    touchgfx::Container cell3_3;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_3;
    touchgfx::TextArea textArea3_1_2_3;
    touchgfx::TextAreaWithOneWildcard bms5_cell7;
    touchgfx::TextArea textArea5_1_2_3;
    touchgfx::Container cell3_4;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4;
    touchgfx::TextArea textArea3_1_2_4;
    touchgfx::TextAreaWithOneWildcard bms5_cell8;
    touchgfx::TextArea textArea5_1_2_4;
    touchgfx::Container cell3_4_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_1;
    touchgfx::TextArea textArea3_1_2_4_1;
    touchgfx::TextAreaWithOneWildcard bms5_cell9;
    touchgfx::TextArea textArea5_1_2_4_1;
    touchgfx::Container cell3_4_2;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_2;
    touchgfx::TextArea textArea3_1_2_4_2;
    touchgfx::TextAreaWithOneWildcard bms5_cell10;
    touchgfx::TextArea textArea5_1_2_4_2;
    touchgfx::Container cell3_4_3;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_3;
    touchgfx::TextArea textArea3_1_2_4_3;
    touchgfx::TextAreaWithOneWildcard bms5_cell12;
    touchgfx::TextArea textArea5_1_2_4_3;
    touchgfx::Container cell3_4_4;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_4;
    touchgfx::TextArea textArea3_1_2_4_4;
    touchgfx::TextAreaWithOneWildcard bms5_cell11;
    touchgfx::TextArea textArea5_1_2_4_4;
    touchgfx::Container cell3_4_5;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_5;
    touchgfx::TextArea textArea3_1_2_4_5;
    touchgfx::TextAreaWithOneWildcard bms5_cell13;
    touchgfx::TextArea textArea5_1_2_4_5;
    touchgfx::Container cell3_4_6;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_6;
    touchgfx::TextArea textArea3_1_2_4_6;
    touchgfx::TextAreaWithOneWildcard bms5_cell14;
    touchgfx::TextArea textArea5_1_2_4_6;
    touchgfx::Container bms2;
    touchgfx::Container cell1_1;
    touchgfx::BoxWithBorder boxWithBorder3_7;
    touchgfx::TextArea textArea3_2;
    touchgfx::TextAreaWithOneWildcard bms6_cell1;
    touchgfx::TextArea textArea5_2;
    touchgfx::Container cell2_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_3;
    touchgfx::TextArea textArea3_1_3;
    touchgfx::TextAreaWithOneWildcard bms6_cell2;
    touchgfx::TextArea textArea5_1_3;
    touchgfx::Container cell4_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_1_1;
    touchgfx::TextArea textArea3_1_1_1;
    touchgfx::TextAreaWithOneWildcard bms6_cell4;
    touchgfx::TextArea textArea5_1_1_1;
    touchgfx::Container cell3_5;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_5;
    touchgfx::TextArea textArea3_1_2_5;
    touchgfx::TextAreaWithOneWildcard bms6_cell3;
    touchgfx::TextArea textArea5_1_2_5;
    touchgfx::Container cell3_1_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_1_1;
    touchgfx::TextArea textArea3_1_2_1_1;
    touchgfx::TextAreaWithOneWildcard bms6_cell5;
    touchgfx::TextArea textArea5_1_2_1_1;
    touchgfx::Container cell3_2_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_2_1;
    touchgfx::TextArea textArea3_1_2_2_1;
    touchgfx::TextAreaWithOneWildcard bms6_cell6;
    touchgfx::TextArea textArea5_1_2_2_1;
    touchgfx::Container cell3_3_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_3_1;
    touchgfx::TextArea textArea3_1_2_3_1;
    touchgfx::TextAreaWithOneWildcard bms6_cell7;
    touchgfx::TextArea textArea5_1_2_3_1;
    touchgfx::Container cell3_4_7;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_7;
    touchgfx::TextArea textArea3_1_2_4_7;
    touchgfx::TextAreaWithOneWildcard bms6_cell8;
    touchgfx::TextArea textArea5_1_2_4_7;
    touchgfx::Container cell3_4_1_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_1_1;
    touchgfx::TextArea textArea3_1_2_4_1_1;
    touchgfx::TextAreaWithOneWildcard bms6_cell9;
    touchgfx::TextArea textArea5_1_2_4_1_1;
    touchgfx::Container cell3_4_2_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_2_1;
    touchgfx::TextArea textArea3_1_2_4_2_1;
    touchgfx::TextAreaWithOneWildcard bms6_cell10;
    touchgfx::TextArea textArea5_1_2_4_2_1;
    touchgfx::Container cell3_4_3_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_3_1;
    touchgfx::TextArea textArea3_1_2_4_3_1;
    touchgfx::TextAreaWithOneWildcard bms6_cell12;
    touchgfx::TextArea textArea5_1_2_4_3_1;
    touchgfx::Container cell3_4_4_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_4_1;
    touchgfx::TextArea textArea3_1_2_4_4_1;
    touchgfx::TextAreaWithOneWildcard bms6_cell11;
    touchgfx::TextArea textArea5_1_2_4_4_1;
    touchgfx::Container cell3_4_5_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_5_1;
    touchgfx::TextArea textArea3_1_2_4_5_1;
    touchgfx::TextAreaWithOneWildcard bms6_cell13;
    touchgfx::TextArea textArea5_1_2_4_5_1;
    touchgfx::Container cell3_4_6_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_6_1;
    touchgfx::TextArea textArea3_1_2_4_6_1;
    touchgfx::TextAreaWithOneWildcard bms6_cell14;
    touchgfx::TextArea textArea5_1_2_4_6_1;
    touchgfx::TextArea textArea6;
    touchgfx::TextArea textArea6_1;
    touchgfx::Circle bms5_circle;
    touchgfx::PainterRGB565 bms5_circlePainter;
    touchgfx::Circle bms6_circle;
    touchgfx::PainterRGB565 bms6_circlePainter;
    touchgfx::Container desni;
    touchgfx::BoxWithBorder boxWithBorder2;
    touchgfx::Container cells_1;
    touchgfx::Container bms3;
    touchgfx::Container cell1_2;
    touchgfx::BoxWithBorder boxWithBorder3_8;
    touchgfx::TextArea textArea3_3;
    touchgfx::TextAreaWithOneWildcard bms7_cell1;
    touchgfx::TextArea textArea5_3;
    touchgfx::Container cell2_2;
    touchgfx::BoxWithBorder boxWithBorder3_6_4;
    touchgfx::TextArea textArea3_1_4;
    touchgfx::TextAreaWithOneWildcard bms7_cell2;
    touchgfx::TextArea textArea5_1_4;
    touchgfx::Container cell4_2;
    touchgfx::BoxWithBorder boxWithBorder3_6_1_2;
    touchgfx::TextArea textArea3_1_1_2;
    touchgfx::TextAreaWithOneWildcard bms7_cell4;
    touchgfx::TextArea textArea5_1_1_2;
    touchgfx::Container cell3_6;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_6;
    touchgfx::TextArea textArea3_1_2_6;
    touchgfx::TextAreaWithOneWildcard bms7_cell3;
    touchgfx::TextArea textArea5_1_2_6;
    touchgfx::Container cell3_1_2;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_1_2;
    touchgfx::TextArea textArea3_1_2_1_2;
    touchgfx::TextAreaWithOneWildcard bms7_cell5;
    touchgfx::TextArea textArea5_1_2_1_2;
    touchgfx::Container cell3_2_2;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_2_2;
    touchgfx::TextArea textArea3_1_2_2_2;
    touchgfx::TextAreaWithOneWildcard bms7_cell6;
    touchgfx::TextArea textArea5_1_2_2_2;
    touchgfx::Container cell3_3_2;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_3_2;
    touchgfx::TextArea textArea3_1_2_3_2;
    touchgfx::TextAreaWithOneWildcard bms7_cell7;
    touchgfx::TextArea textArea5_1_2_3_2;
    touchgfx::Container cell3_4_8;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_8;
    touchgfx::TextArea textArea3_1_2_4_8;
    touchgfx::TextAreaWithOneWildcard bms7_cell8;
    touchgfx::TextArea textArea5_1_2_4_8;
    touchgfx::Container cell3_4_1_2;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_1_2;
    touchgfx::TextArea textArea3_1_2_4_1_2;
    touchgfx::TextAreaWithOneWildcard bms7_cell9;
    touchgfx::TextArea textArea5_1_2_4_1_2;
    touchgfx::Container cell3_4_2_2;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_2_2;
    touchgfx::TextArea textArea3_1_2_4_2_2;
    touchgfx::TextAreaWithOneWildcard bms7_cell10;
    touchgfx::TextArea textArea5_1_2_4_2_2;
    touchgfx::Container cell3_4_3_2;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_3_2;
    touchgfx::TextArea textArea3_1_2_4_3_2;
    touchgfx::TextAreaWithOneWildcard bms7_cell12;
    touchgfx::TextArea textArea5_1_2_4_3_2;
    touchgfx::Container cell3_4_4_2;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_4_2;
    touchgfx::TextArea textArea3_1_2_4_4_2;
    touchgfx::TextAreaWithOneWildcard bms7_cell11;
    touchgfx::TextArea textArea5_1_2_4_4_2;
    touchgfx::Container cell3_4_5_2;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_5_2;
    touchgfx::TextArea textArea3_1_2_4_5_2;
    touchgfx::TextAreaWithOneWildcard bms7_cell13;
    touchgfx::TextArea textArea5_1_2_4_5_2;
    touchgfx::Container cell3_4_6_2;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_6_2;
    touchgfx::TextArea textArea3_1_2_4_6_2;
    touchgfx::TextAreaWithOneWildcard bms7_cell14;
    touchgfx::TextArea textArea5_1_2_4_6_2;
    touchgfx::Container bms4;
    touchgfx::Container cell1_1_1;
    touchgfx::BoxWithBorder boxWithBorder3_7_1;
    touchgfx::TextArea textArea3_2_1;
    touchgfx::TextAreaWithOneWildcard bms8_cell1;
    touchgfx::TextArea textArea5_2_1;
    touchgfx::Container cell2_1_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_3_1;
    touchgfx::TextArea textArea3_1_3_1;
    touchgfx::TextAreaWithOneWildcard bms8_cell2;
    touchgfx::TextArea textArea5_1_3_1;
    touchgfx::Container cell4_1_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_1_1_1;
    touchgfx::TextArea textArea3_1_1_1_1;
    touchgfx::TextAreaWithOneWildcard bms8_cell4;
    touchgfx::TextArea textArea5_1_1_1_1;
    touchgfx::Container cell3_5_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_5_1;
    touchgfx::TextArea textArea3_1_2_5_1;
    touchgfx::TextAreaWithOneWildcard bms8_cell3;
    touchgfx::TextArea textArea5_1_2_5_1;
    touchgfx::Container cell3_1_1_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_1_1_1;
    touchgfx::TextArea textArea3_1_2_1_1_1;
    touchgfx::TextAreaWithOneWildcard bms8_cell5;
    touchgfx::TextArea textArea5_1_2_1_1_1;
    touchgfx::Container cell3_2_1_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_2_1_1;
    touchgfx::TextArea textArea3_1_2_2_1_1;
    touchgfx::TextAreaWithOneWildcard bms8_cell6;
    touchgfx::TextArea textArea5_1_2_2_1_1;
    touchgfx::Container cell3_3_1_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_3_1_1;
    touchgfx::TextArea textArea3_1_2_3_1_1;
    touchgfx::TextAreaWithOneWildcard bms8_cell7;
    touchgfx::TextArea textArea5_1_2_3_1_1;
    touchgfx::Container cell3_4_7_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_7_1;
    touchgfx::TextArea textArea3_1_2_4_7_1;
    touchgfx::TextAreaWithOneWildcard bms8_cell8;
    touchgfx::TextArea textArea5_1_2_4_7_1;
    touchgfx::Container cell3_4_1_1_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_1_1_1;
    touchgfx::TextArea textArea3_1_2_4_1_1_1;
    touchgfx::TextAreaWithOneWildcard bms8_cell9;
    touchgfx::TextArea textArea5_1_2_4_1_1_1;
    touchgfx::Container cell3_4_2_1_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_2_1_1;
    touchgfx::TextArea textArea3_1_2_4_2_1_1;
    touchgfx::TextAreaWithOneWildcard bms8_cell10;
    touchgfx::TextArea textArea5_1_2_4_2_1_1;
    touchgfx::Container cell3_4_3_1_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_3_1_1;
    touchgfx::TextArea textArea3_1_2_4_3_1_1;
    touchgfx::TextAreaWithOneWildcard bms8_cell12;
    touchgfx::TextArea textArea5_1_2_4_3_1_1;
    touchgfx::Container cell3_4_4_1_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_4_1_1;
    touchgfx::TextArea textArea3_1_2_4_4_1_1;
    touchgfx::TextAreaWithOneWildcard bms8_cell11;
    touchgfx::TextArea textArea5_1_2_4_4_1_1;
    touchgfx::Container cell3_4_5_1_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_5_1_1;
    touchgfx::TextArea textArea3_1_2_4_5_1_1;
    touchgfx::TextAreaWithOneWildcard bms8_cell13;
    touchgfx::TextArea textArea5_1_2_4_5_1_1;
    touchgfx::Container cell3_4_6_1_1;
    touchgfx::BoxWithBorder boxWithBorder3_6_2_4_6_1_1;
    touchgfx::TextArea textArea3_1_2_4_6_1_1;
    touchgfx::TextAreaWithOneWildcard bms8_cell14;
    touchgfx::TextArea textArea5_1_2_4_6_1_1;
    touchgfx::TextArea textArea6_2;
    touchgfx::TextArea textArea6_2_1;
    touchgfx::Circle bms7_circle;
    touchgfx::PainterRGB565 bms7_circlePainter;
    touchgfx::Circle bms8_circle;
    touchgfx::PainterRGB565 bms8_circlePainter;

    /*
     * Wildcard Buffers
     */
    static const uint16_t BMS5_CELL1_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms5_cell1Buffer[BMS5_CELL1_SIZE];
    static const uint16_t BMS5_CELL2_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms5_cell2Buffer[BMS5_CELL2_SIZE];
    static const uint16_t BMS5_CELL4_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms5_cell4Buffer[BMS5_CELL4_SIZE];
    static const uint16_t BMS5_CELL3_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms5_cell3Buffer[BMS5_CELL3_SIZE];
    static const uint16_t BMS5_CELL5_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms5_cell5Buffer[BMS5_CELL5_SIZE];
    static const uint16_t BMS5_CELL6_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms5_cell6Buffer[BMS5_CELL6_SIZE];
    static const uint16_t BMS5_CELL7_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms5_cell7Buffer[BMS5_CELL7_SIZE];
    static const uint16_t BMS5_CELL8_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms5_cell8Buffer[BMS5_CELL8_SIZE];
    static const uint16_t BMS5_CELL9_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms5_cell9Buffer[BMS5_CELL9_SIZE];
    static const uint16_t BMS5_CELL10_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms5_cell10Buffer[BMS5_CELL10_SIZE];
    static const uint16_t BMS5_CELL12_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms5_cell12Buffer[BMS5_CELL12_SIZE];
    static const uint16_t BMS5_CELL11_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms5_cell11Buffer[BMS5_CELL11_SIZE];
    static const uint16_t BMS5_CELL13_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms5_cell13Buffer[BMS5_CELL13_SIZE];
    static const uint16_t BMS5_CELL14_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms5_cell14Buffer[BMS5_CELL14_SIZE];
    static const uint16_t BMS6_CELL1_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms6_cell1Buffer[BMS6_CELL1_SIZE];
    static const uint16_t BMS6_CELL2_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms6_cell2Buffer[BMS6_CELL2_SIZE];
    static const uint16_t BMS6_CELL4_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms6_cell4Buffer[BMS6_CELL4_SIZE];
    static const uint16_t BMS6_CELL3_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms6_cell3Buffer[BMS6_CELL3_SIZE];
    static const uint16_t BMS6_CELL5_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms6_cell5Buffer[BMS6_CELL5_SIZE];
    static const uint16_t BMS6_CELL6_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms6_cell6Buffer[BMS6_CELL6_SIZE];
    static const uint16_t BMS6_CELL7_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms6_cell7Buffer[BMS6_CELL7_SIZE];
    static const uint16_t BMS6_CELL8_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms6_cell8Buffer[BMS6_CELL8_SIZE];
    static const uint16_t BMS6_CELL9_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms6_cell9Buffer[BMS6_CELL9_SIZE];
    static const uint16_t BMS6_CELL10_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms6_cell10Buffer[BMS6_CELL10_SIZE];
    static const uint16_t BMS6_CELL12_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms6_cell12Buffer[BMS6_CELL12_SIZE];
    static const uint16_t BMS6_CELL11_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms6_cell11Buffer[BMS6_CELL11_SIZE];
    static const uint16_t BMS6_CELL13_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms6_cell13Buffer[BMS6_CELL13_SIZE];
    static const uint16_t BMS6_CELL14_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms6_cell14Buffer[BMS6_CELL14_SIZE];
    static const uint16_t BMS7_CELL1_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms7_cell1Buffer[BMS7_CELL1_SIZE];
    static const uint16_t BMS7_CELL2_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms7_cell2Buffer[BMS7_CELL2_SIZE];
    static const uint16_t BMS7_CELL4_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms7_cell4Buffer[BMS7_CELL4_SIZE];
    static const uint16_t BMS7_CELL3_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms7_cell3Buffer[BMS7_CELL3_SIZE];
    static const uint16_t BMS7_CELL5_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms7_cell5Buffer[BMS7_CELL5_SIZE];
    static const uint16_t BMS7_CELL6_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms7_cell6Buffer[BMS7_CELL6_SIZE];
    static const uint16_t BMS7_CELL7_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms7_cell7Buffer[BMS7_CELL7_SIZE];
    static const uint16_t BMS7_CELL8_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms7_cell8Buffer[BMS7_CELL8_SIZE];
    static const uint16_t BMS7_CELL9_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms7_cell9Buffer[BMS7_CELL9_SIZE];
    static const uint16_t BMS7_CELL10_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms7_cell10Buffer[BMS7_CELL10_SIZE];
    static const uint16_t BMS7_CELL12_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms7_cell12Buffer[BMS7_CELL12_SIZE];
    static const uint16_t BMS7_CELL11_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms7_cell11Buffer[BMS7_CELL11_SIZE];
    static const uint16_t BMS7_CELL13_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms7_cell13Buffer[BMS7_CELL13_SIZE];
    static const uint16_t BMS7_CELL14_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms7_cell14Buffer[BMS7_CELL14_SIZE];
    static const uint16_t BMS8_CELL1_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms8_cell1Buffer[BMS8_CELL1_SIZE];
    static const uint16_t BMS8_CELL2_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms8_cell2Buffer[BMS8_CELL2_SIZE];
    static const uint16_t BMS8_CELL4_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms8_cell4Buffer[BMS8_CELL4_SIZE];
    static const uint16_t BMS8_CELL3_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms8_cell3Buffer[BMS8_CELL3_SIZE];
    static const uint16_t BMS8_CELL5_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms8_cell5Buffer[BMS8_CELL5_SIZE];
    static const uint16_t BMS8_CELL6_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms8_cell6Buffer[BMS8_CELL6_SIZE];
    static const uint16_t BMS8_CELL7_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms8_cell7Buffer[BMS8_CELL7_SIZE];
    static const uint16_t BMS8_CELL8_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms8_cell8Buffer[BMS8_CELL8_SIZE];
    static const uint16_t BMS8_CELL9_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms8_cell9Buffer[BMS8_CELL9_SIZE];
    static const uint16_t BMS8_CELL10_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms8_cell10Buffer[BMS8_CELL10_SIZE];
    static const uint16_t BMS8_CELL12_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms8_cell12Buffer[BMS8_CELL12_SIZE];
    static const uint16_t BMS8_CELL11_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms8_cell11Buffer[BMS8_CELL11_SIZE];
    static const uint16_t BMS8_CELL13_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms8_cell13Buffer[BMS8_CELL13_SIZE];
    static const uint16_t BMS8_CELL14_SIZE = 10;
    touchgfx::Unicode::UnicodeChar bms8_cell14Buffer[BMS8_CELL14_SIZE];

private:

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 12000;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // SCREEN5VIEWBASE_HPP
