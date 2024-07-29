#include "UtilActionSet.h"

UUtilActionSet::UUtilActionSet() {
}

FMotionSetType UUtilActionSet::MakeLiteralMotionSetType(FMotionSetType in_Value) {
    return FMotionSetType{};
}

FActionSetType UUtilActionSet::MakeLiteralActionSetType(FActionSetType in_Value) {
    return FActionSetType{};
}

FName UUtilActionSet::GetMotionSetTypeName(int32 in_index) {
    return NAME_None;
}

FName UUtilActionSet::GetActionSetTypeName(int32 in_index) {
    return NAME_None;
}


