// Object: DestructionDebrisReferenceObjectData
// ClassId: 3972
// RuntimeId: 25759
// TypeInfo: 0x0000000144F0DE40
#include "../Entity/SpatialReferenceObjectData.h"
#include "../Physics/DebrisInsertType.h"
#include "../Global/Float32.h"
#include "../Core/QualityScalableInt.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace Physics {
    class DestructionDebrisReferenceObjectData : public Entity::SpatialReferenceObjectData {
        Physics::DebrisInsertType InsertType; // 0xC0
        Float32 Gap; // 0xC4
        Core::QualityScalableInt MaxPieceCount; // 0xC8
        Uint32 RandomSeed; // 0xDC
    }; // 0xE0
    static_assert(sizeof(DestructionDebrisReferenceObjectData) == 0xE0);
}
#pragma pack(pop)