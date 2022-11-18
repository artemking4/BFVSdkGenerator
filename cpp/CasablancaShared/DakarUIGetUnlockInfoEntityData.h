// Object: DakarUIGetUnlockInfoEntityData
// ClassId: 2590
// RuntimeId: 59872
// TypeInfo: 0x0000000144D665F0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIPlayerObject.h"
#include "../CasablancaShared/BFUIUnlockObject.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../CasablancaShared/CustomizationSlotType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DakarUIGetUnlockInfoEntityData : public Entity::EntityData {
        CasablancaShared::BFUIPlayerObject Player; // 0x20
        CasablancaShared::BFUIUnlockObject UnlockObject; // 0x28
        CString UIMetaDataType; // 0x30
        CasablancaShared::CustomizationSlotType SlotType; // 0x38
        Boolean IsSpectating; // 0x3C
        Boolean OutputIdOnly; // 0x3D
        char pad_0x3E[0x2];
    }; // 0x40
    static_assert(sizeof(DakarUIGetUnlockInfoEntityData) == 0x40);
}
#pragma pack(pop)