// Object: CriterionObject
// ClassId: 1477
// RuntimeId: 22622
// TypeInfo: 0x0000000144DA08E0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CriterionObject : public Core::DataContainer {
        CString Code; // 0x18
        UIIncubatorShared::LocalizedStringId Description; // 0x20
        Int32 AimValue; // 0x28
        Int32 Value; // 0x2C
        Float32 ValueModifier; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(CriterionObject) == 0x38);
}
#pragma pack(pop)