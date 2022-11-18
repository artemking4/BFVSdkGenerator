// Object: TeamData
// ClassId: 427
// RuntimeId: 341
// TypeInfo: 0x0000000144E77C40
#include "../GameShared/TeamAsset.h"
#include "../GameShared/CharacterBlueprint.h"
#include "../GameShared/FactionId.h"
#include "../GameShared/CharacterCustomizationAsset.h"
#include "../GameShared/VehicleCustomizationAsset.h"

#pragma pack(push, 8)
namespace GameShared {
    class TeamData : public GameShared::TeamAsset {
        GameShared::CharacterBlueprint Soldier; // 0x20
        GameShared::FactionId Faction; // 0x28
        char pad_0x2C[0x4];
        Array<GameShared::CharacterCustomizationAsset> SoldierCustomization; // 0x30
        Array<GameShared::VehicleCustomizationAsset> VehicleCustomization; // 0x38
    }; // 0x40
    static_assert(sizeof(TeamData) == 0x40);
}
#pragma pack(pop)