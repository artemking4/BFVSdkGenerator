// Object: GameEventListenerEntityData
// ClassId: 2775
// RuntimeId: 59860
// TypeInfo: 0x0000000144D1E2F0
#include "../Entity/EntityData.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GameEventListenerEntityData : public Entity::EntityData {
        Uint32 TypeNameHash; // 0x20
        Boolean WaitForDisplay; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(GameEventListenerEntityData) == 0x28);
}
#pragma pack(pop)