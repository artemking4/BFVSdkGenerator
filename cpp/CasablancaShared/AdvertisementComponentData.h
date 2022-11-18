// Object: AdvertisementComponentData
// ClassId: 1815
// RuntimeId: 51063
// TypeInfo: 0x0000000144D6CEB0
#include "../GameShared/PartComponentData.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class AdvertisementComponentData : public GameShared::PartComponentData {
        CString Identifier; // 0xA0
        CString AdTexture; // 0xA8
    }; // 0xB0
    static_assert(sizeof(AdvertisementComponentData) == 0xB0);
}
#pragma pack(pop)