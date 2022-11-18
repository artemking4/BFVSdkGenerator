// Object: RealTimeBoostData
// ClassId: 1298
// RuntimeId: 45980
// TypeInfo: 0x0000000144D650F0
#include "../CasablancaShared/CatalogBoostBaseData.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class RealTimeBoostData : public CasablancaShared::CatalogBoostBaseData {
        Uint32 TimeStampOffset; // 0x68
        char pad_0x6C[0x4];
    }; // 0x70
    static_assert(sizeof(RealTimeBoostData) == 0x70);
}
#pragma pack(pop)