// Object: SpatialReferenceObjectData
// ClassId: 3971
// RuntimeId: 11684
// TypeInfo: 0x0000000144ED7AF0
#include "../Entity/ReferenceObjectData.h"
#include "../Core/LocalPlayerId.h"

#pragma pack(push, 16)
namespace Entity {
    class SpatialReferenceObjectData : public Entity::ReferenceObjectData {
        Core::LocalPlayerId LocalPlayerId; // 0xB0
        char pad_0xB4[0xC];
    }; // 0xC0
    static_assert(sizeof(SpatialReferenceObjectData) == 0xC0);
}
#pragma pack(pop)