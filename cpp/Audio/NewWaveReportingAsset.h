// Object: NewWaveReportingAsset
// ClassId: 595
// RuntimeId: 65102
// TypeInfo: 0x0000000144E15540
#include "../Core/Asset.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Audio {
    class NewWaveReportingAsset : public Core::Asset {
        CString NewWaveDebugAssetUri; // 0x20
    }; // 0x28
    static_assert(sizeof(NewWaveReportingAsset) == 0x28);
}
#pragma pack(pop)