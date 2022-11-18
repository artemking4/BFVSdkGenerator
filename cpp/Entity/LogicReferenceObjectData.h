// Object: LogicReferenceObjectData
// ClassId: 3944
// RuntimeId: 35476
// TypeInfo: 0x0000000144ED7A70
#include "../Entity/ReferenceObjectData.h"
#include "../Core/LocalPlayerId.h"
#include "../Entity/SubRealm.h"

#pragma pack(push, 16)
namespace Entity {
    class LogicReferenceObjectData : public Entity::ReferenceObjectData {
        Core::LocalPlayerId LocalPlayerId; // 0xB0
        Entity::SubRealm SubRealm; // 0xB4
        char pad_0xB8[0x8];
    }; // 0xC0
    static_assert(sizeof(LogicReferenceObjectData) == 0xC0);
}
#pragma pack(pop)