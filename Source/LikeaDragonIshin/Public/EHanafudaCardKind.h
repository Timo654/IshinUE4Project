#pragma once
#include "CoreMinimal.h"
#include "EHanafudaCardKind.generated.h"

UENUM(BlueprintType)
enum class EHanafudaCardKind : uint8 {
    HCK_Matsu_Tsuru,
    HCK_Matsu_Akatan,
    HCK_Matsu_Kasu1,
    HCK_Matsu_Kasu2,
    HCK_Ume_Uguisu,
    HCK_Ume_Akatan,
    HCK_Ume_Kasu1,
    HCK_Ume_Kasu2,
    HCK_Sakura_Maku,
    HCK_Sakura_Akatan,
    HCK_Sakura_Kasu1,
    HCK_Sakura_Kasu2,
    HCK_Fuji_Hototogisu,
    HCK_Fuji_tan,
    HCK_Fuji_Kasu1,
    HCK_Fuji_Kasu2,
    HCK_Ayame_Yatsuhashi,
    HCK_Ayame_tan,
    HCK_Ayame_Kasu1,
    HCK_Ayame_Kasu2,
    HCK_Botan_Chou,
    HCK_Botan_Aotan,
    HCK_Botan_Kasu1,
    HCK_Botan_Kasu2,
    HCK_Hagi_Inoshishi,
    HCK_Hagi_tan,
    HCK_Hagi_Kasu1,
    HCK_Hagi_Kasu2,
    HCK_Susuki_Tsuki,
    HCK_Susuki_Gan,
    HCK_Susuki_Kasu1,
    HCK_Susuki_Kasu2,
    HCK_Kiku_Sakazuki,
    HCK_Kiku_Aotan,
    HCK_Kiku_Kasu1,
    HCK_Kiku_Kasu2,
    HCK_Momiji_Shika,
    HCK_Momiji_Aotan,
    HCK_Momiji_Kasu1,
    HCK_Momiji_Kasu2,
    HCK_Yanagi_Michikaze,
    HCK_Yanagi_Tsubame,
    HCK_Yanagi_Tan,
    HCK_Yanagi_Oni,
    HCK_Kiri_Houou,
    HCK_Kiri_Kasu1,
    HCK_Kiri_Kasu2,
    HCK_Kiri_Kasu3,
};

