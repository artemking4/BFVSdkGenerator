// Object: ConnectivityEntityData
// ClassId: 2544
// RuntimeId: 58160
// TypeInfo: 0x0000000144E22000
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"
#include "../Destruction/StaticModelToBreakableParts.h"
#include "../Destruction/BreakablePartToStaticEntityPart.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Destruction {
    class ConnectivityEntityData : public Entity::EntityData {
        Array<Int32> BreakableModelEventIds; // 0x20
        Array<Int32> StaticModelEventIds; // 0x28
        Array<Uint32> StaticModelFirstIndices; // 0x30
        Array<Destruction::StaticModelToBreakableParts> StaticModelToBreakablePartsArray; // 0x38
        Array<Destruction::BreakablePartToStaticEntityPart> BreakablePartToStaticModelPartArray; // 0x40
        Float32 BreakableModelExtraRadius; // 0x48
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(ConnectivityEntityData) == 0x50);
}
#pragma pack(pop)