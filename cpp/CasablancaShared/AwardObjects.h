// Object: AwardObjects
// ClassId: 1189
// RuntimeId: 64360
// TypeInfo: 0x0000000144D9FD60
#include "../Core/DataContainer.h"
#include "../CasablancaShared/AwardObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AwardObjects : public Core::DataContainer {
        Array<CasablancaShared::AwardObject> Awards; // 0x18
    }; // 0x20
    static_assert(sizeof(AwardObjects) == 0x20);
}
#pragma pack(pop)