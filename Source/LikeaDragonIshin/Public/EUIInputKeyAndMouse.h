#pragma once
#include "CoreMinimal.h"
#include "EUIInputKeyAndMouse.generated.h"

UENUM(BlueprintType)
enum class EUIInputKeyAndMouse : uint8 {
    NotSet,
    MouseLeftButton,
    MouseRightButton,
    MouseMiddleButton,
    MouseButtonBack,
    MouseButtonForward,
    Cancel,
    Equals,
    Back,
    Tab,
    Clear,
    Return,
    Shift,
    Control,
    Alt,
    Pause,
    CapsLock,
    Kana,
    Junja,
    Final,
    Kanji,
    Escape,
    Convert,
    NonConvert,
    Accept,
    ModeChange,
    Space,
    Priority,
    Next,
    End,
    Home,
    Left,
    Up,
    Right,
    Down,
    Select,
    Print,
    Execute,
    Snapshot,
    Insert,
    Delete,
    Help,
    _0030,
    _0031,
    _0032,
    _0033,
    _0034,
    _0035,
    _0036,
    _0037,
    _0038,
    _0039,
    A,
    B,
    C,
    D,
    E,
    F,
    G,
    H,
    I,
    J,
    K,
    L,
    M,
    N,
    O,
    P,
    Q,
    R,
    S,
    T,
    U,
    V,
    W,
    X,
    Y,
    Z,
    WindowL,
    WindowR,
    Apps,
    Sleep,
    NumPad0,
    NumPad1,
    NumPad2,
    NumPad3,
    NumPad4,
    NumPad5,
    NumPad6,
    NumPad7,
    NumPad8,
    NumPad9,
    Multiply,
    Add,
    Separator,
    Subtract,
    Decimal,
    Divide,
    F1,
    F2,
    F3,
    F4,
    F5,
    F6,
    F7,
    F8,
    F9,
    F10,
    F11,
    F12,
    F13,
    F14,
    F15,
    F16,
    F17,
    F18,
    F19,
    F20,
    F21,
    F22,
    F23,
    F24,
    NumLock,
    Scroll,
    ShiftL,
    ShiftR,
    ControlL,
    ControlR,
    AltL,
    AltR,
    MediaStop,
    MediaPlayPause,
    Oem1,
    OemPlus,
    OemComma,
    OemMinus,
    OemPeriod,
    Oem2,
    Oem3,
    SomeJapan5,
    Oem4,
    Oem5,
    Oem6,
    Oem7,
    Oem8,
    Oem102,
    SomeJapan1,
    Alphanumeric,
    Hiragana,
    SomeJapan2,
    SomeJapan3,
    SomeJapan4,
    MouseScrollWheelUp,
    MouseScrollWheelDown,
    MouseMoveUp,
    MouseMoveDown,
    MouseMoveLeft,
    MouseMoveRight,
    MouseScrollWheelUpDown,
    MouseMoveAllDummy,
    DirectionalsDummy,
};

