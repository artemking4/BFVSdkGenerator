// Object: EadpStatCategoryData
// ClassId: 1530
// RuntimeId: 61328
// TypeInfo: 0x0000000144DA00E0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/EadpStatCategory.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EadpStatCategoryData : public Core::DataContainer {
        CasablancaShared::EadpStatCategory Category; // 0x18
        char pad_0x1C[0x4];
        Array<CString> StatKeys; // 0x20
    }; // 0x28
    static_assert(sizeof(EadpStatCategoryData) == 0x28);
}
#pragma pack(pop)