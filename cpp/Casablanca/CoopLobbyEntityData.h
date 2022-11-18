// Object: CoopLobbyEntityData
// ClassId: 2552
// RuntimeId: 49211
// TypeInfo: 0x0000000144C332F0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CoopLobbyEntityData : public Entity::EntityData {
        Float32 ClientConnectionTimeout; // 0x20
        Boolean IsInGame; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(CoopLobbyEntityData) == 0x28);
}
#pragma pack(pop)