// Object: AITargetLocatorComponentData
// ClassId: 1703
// RuntimeId: 58799
// TypeInfo: 0x0000000144C06F60
#include "../Entity/GameComponentData.h"
#include "../Core/Realm.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AITargetLocatorComponentData : public Entity::GameComponentData {
        Core::Realm Realm; // 0x80
        char pad_0x84[0xC];
    }; // 0x90
    static_assert(sizeof(AITargetLocatorComponentData) == 0x90);
}
#pragma pack(pop)