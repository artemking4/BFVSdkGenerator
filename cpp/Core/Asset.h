// Object: Asset
// ClassId: 130
// RuntimeId: 49142
// TypeInfo: 0x0000000144BE8CF0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Core {
    class Asset : public Core::DataContainer {
        CString Name; // 0x18
    }; // 0x20
    static_assert(sizeof(Asset) == 0x20);
}
#pragma pack(pop)