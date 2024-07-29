#pragma once
#include "CoreMinimal.h"
#include "EOichokabuAttribute.generated.h"

UENUM(BlueprintType)
enum class EOichokabuAttribute : uint8 {
    Buta,
    Pin,
    Nizou,
    Santa,
    Yotsuya,
    Goke,
    Roppou,
    Naki,
    Oicho,
    Kabu,
    Child_Shippin,
    Parent_Kuppin,
    Child_Arashi,
    Parent_Arashi,
    Child_Doshippin,
    Parent_Doshippin,
    ShirokuNoNige,
    Max,
};

