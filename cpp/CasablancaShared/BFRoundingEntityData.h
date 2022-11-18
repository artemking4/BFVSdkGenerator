// Object: BFRoundingEntityData
// ClassId: 2117
// RuntimeId: 46620
// TypeInfo: 0x0000000144D5BB60
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/BFRoundingOp.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFRoundingEntityData : public Entity::EntityData {
        Float32 FloatIn; // 0x20
        CasablancaShared::BFRoundingOp RoundingType; // 0x24
    }; // 0x28
    static_assert(sizeof(BFRoundingEntityData) == 0x28);
}
#pragma pack(pop)