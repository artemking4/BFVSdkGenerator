// Object: AwardReportObjects
// ClassId: 1191
// RuntimeId: 39929
// TypeInfo: 0x0000000144DA06E0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/AwardReportObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AwardReportObjects : public Core::DataContainer {
        Array<CasablancaShared::AwardReportObject> Awards; // 0x18
    }; // 0x20
    static_assert(sizeof(AwardReportObjects) == 0x20);
}
#pragma pack(pop)