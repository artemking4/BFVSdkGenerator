// Object: EntityAttachData
// ClassId: 1559
// RuntimeId: 25051
// TypeInfo: 0x0000000144DBA900
#include "../DiceCommonsShared/EntityLinkData.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../DiceCommonsShared/CoordinateModificationData.h"
#include "../DiceCommonsShared/OffsetModificationData.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class EntityAttachData : public DiceCommonsShared::EntityLinkData {
        CString PropertyName; // 0x20
        DiceCommonsShared::CoordinateModificationData CoordinateSpace; // 0x28
        DiceCommonsShared::OffsetModificationData Offset; // 0x30
        Boolean UseRotation; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(EntityAttachData) == 0x40);
}
#pragma pack(pop)