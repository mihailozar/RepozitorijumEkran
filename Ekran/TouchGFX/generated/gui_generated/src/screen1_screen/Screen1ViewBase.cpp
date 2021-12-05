/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase()
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box1.setPosition(0, 0, 800, 480);
    box1.setColor(touchgfx::Color::getColorFromRGB(7, 17, 35));

    Levi.setPosition(0, 0, 450, 480);

    box2.setPosition(13, 20, 437, 441);
    box2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Levi.add(box2);

    speed_txt.setPosition(20, 31, 418, 353);
    speed_txt.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    speed_txt.setLinespacing(0);
    Unicode::snprintf(speed_txtBuffer, SPEED_TXT_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID2).getText());
    speed_txt.setWildcard(speed_txtBuffer);
    speed_txt.setTypedText(touchgfx::TypedText(T_SINGLEUSEID1));
    Levi.add(speed_txt);

    textArea1.setXY(176, 337);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID3));
    Levi.add(textArea1);

    desni.setPosition(450, 0, 350, 480);

    CAN_STATUS.setPosition(19, 99, 312, 93);

    box3.setPosition(0, 0, 312, 93);
    box3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    CAN_STATUS.add(box3);

    ecu.setPosition(16, 36, 58, 51);
    ecu.setCenter(25, 25);
    ecu.setRadius(25);
    ecu.setLineWidth(0);
    ecu.setArc(0, 360);
    ecuPainter.setColor(touchgfx::Color::getColorFromRGB(119, 119, 119));
    ecu.setPainter(ecuPainter);
    CAN_STATUS.add(ecu);

    bms.setPosition(132, 36, 58, 51);
    bms.setCenter(25, 25);
    bms.setRadius(25);
    bms.setLineWidth(0);
    bms.setArc(0, 360);
    bmsPainter.setColor(touchgfx::Color::getColorFromRGB(119, 119, 119));
    bms.setPainter(bmsPainter);
    CAN_STATUS.add(bms);

    lvpb.setPosition(243, 36, 58, 51);
    lvpb.setCenter(25, 25);
    lvpb.setRadius(25);
    lvpb.setLineWidth(0);
    lvpb.setArc(0, 360);
    lvpbPainter.setColor(touchgfx::Color::getColorFromRGB(119, 119, 119));
    lvpb.setPainter(lvpbPainter);
    CAN_STATUS.add(lvpb);

    textArea4.setXY(101, 0);
    textArea4.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea4.setLinespacing(0);
    textArea4.setTypedText(touchgfx::TypedText(T_SINGLEUSEID6));
    CAN_STATUS.add(textArea4);

    textArea3.setXY(11, 0);
    textArea3.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea3.setLinespacing(0);
    textArea3.setTypedText(touchgfx::TypedText(T_SINGLEUSEID5));
    CAN_STATUS.add(textArea3);

    textArea5.setXY(232, 0);
    textArea5.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea5.setLinespacing(0);
    textArea5.setTypedText(touchgfx::TypedText(T_SINGLEUSEID7));
    CAN_STATUS.add(textArea5);
    desni.add(CAN_STATUS);

    VEHICLE_STATE.setPosition(19, 20, 312, 65);

    box5.setPosition(0, 0, 312, 65);
    box5.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    VEHICLE_STATE.add(box5);

    vehicle_state.setPosition(8, 11, 296, 45);
    vehicle_state.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    vehicle_state.setLinespacing(0);
    vehicle_stateBuffer[0] = 0;
    vehicle_state.setWildcard(vehicle_stateBuffer);
    vehicle_state.setTypedText(touchgfx::TypedText(T_SINGLEUSEID9));
    VEHICLE_STATE.add(vehicle_state);
    desni.add(VEHICLE_STATE);

    HV.setPosition(19, 213, 312, 249);

    box4.setPosition(0, 0, 312, 249);
    box4.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    HV.add(box4);

    textArea2.setXY(128, 0);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID4));
    HV.add(textArea2);

    textArea7.setXY(8, 62);
    textArea7.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea7.setLinespacing(0);
    textArea7.setTypedText(touchgfx::TypedText(T_SINGLEUSEID10));
    HV.add(textArea7);

    textArea8.setXY(8, 124);
    textArea8.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea8.setLinespacing(0);
    textArea8.setTypedText(touchgfx::TypedText(T_SINGLEUSEID11));
    HV.add(textArea8);

    textArea9.setXY(8, 187);
    textArea9.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea9.setLinespacing(0);
    textArea9.setTypedText(touchgfx::TypedText(T_SINGLEUSEID12));
    HV.add(textArea9);

    voltage.setPosition(190, 62, 104, 47);
    voltage.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    voltage.setLinespacing(0);
    Unicode::snprintf(voltageBuffer, VOLTAGE_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID14).getText());
    voltage.setWildcard(voltageBuffer);
    voltage.setTypedText(touchgfx::TypedText(T_SINGLEUSEID13));
    HV.add(voltage);

    temp.setPosition(190, 124, 104, 47);
    temp.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    temp.setLinespacing(0);
    Unicode::snprintf(tempBuffer, TEMP_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID16).getText());
    temp.setWildcard(tempBuffer);
    temp.setTypedText(touchgfx::TypedText(T_SINGLEUSEID15));
    HV.add(temp);

    soc.setPosition(190, 187, 104, 47);
    soc.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    soc.setLinespacing(0);
    Unicode::snprintf(socBuffer, SOC_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID18).getText());
    soc.setWildcard(socBuffer);
    soc.setTypedText(touchgfx::TypedText(T_SINGLEUSEID17));
    HV.add(soc);
    desni.add(HV);

    add(__background);
    add(box1);
    add(Levi);
    add(desni);
}

void Screen1ViewBase::setupScreen()
{

}

//Handles when a key is pressed
void Screen1ViewBase::handleKeyEvent(uint8_t key)
{
    if(1 == key)
    {
        //Interaction1
        //When hardware button 1 clicked change screen to Screen3
        //Go to Screen3 with no screen transition
        application().gotoScreen3ScreenNoTransition();
    }
}
