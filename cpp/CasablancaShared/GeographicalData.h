// Object: GeographicalData
// ClassId: 4088
// RuntimeId: 55911
// TypeInfo: 0x0000000144D2A920
#include "../Core/DataContainer.h"
#include "../CasablancaShared/UIGeoLatitude.h"
#include "../CasablancaShared/UIGeoLongitude.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GeographicalData : public Core::DataContainer {
        CasablancaShared::UIGeoLatitude Latitude; // 0x18
        CasablancaShared::UIGeoLongitude Longitude; // 0x24
        Float32 SeaLevelOffset; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(GeographicalData) == 0x38);
}
#pragma pack(pop)