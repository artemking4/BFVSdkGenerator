// Object: PlayerData
// ClassId: 632
// RuntimeId: 33401
// TypeInfo: 0x0000000144E75740
#include "../Core/Asset.h"
#include "../GameShared/PlayerViewData.h"
#include "../GameShared/EntryInputActionMapsData.h"
#include "../GameShared/InputActionMappingsData.h"

#pragma pack(push, 8)
namespace GameShared {
    class PlayerData : public Core::Asset {
        GameShared::PlayerViewData PlayerView; // 0x20
        GameShared::EntryInputActionMapsData InputConceptDefinition; // 0x28
        GameShared::InputActionMappingsData InputMapping; // 0x30
    }; // 0x38
    static_assert(sizeof(PlayerData) == 0x38);
}
#pragma pack(pop)