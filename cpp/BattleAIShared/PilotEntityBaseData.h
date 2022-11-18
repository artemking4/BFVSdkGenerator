// Object: PilotEntityBaseData
// ClassId: 2999
// RuntimeId: 63342
// TypeInfo: 0x0000000144C18CB0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class PilotEntityBaseData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(PilotEntityBaseData) == 0x28);
}
#pragma pack(pop)