// Object: BFTelemetryStateNodeEntityData
// ClassId: 3525
// RuntimeId: 3740
// TypeInfo: 0x0000000144D6D830
#include "../UIIncubatorShared/StateNodeEntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFTelemetryStateNodeEntityData : public UIIncubatorShared::StateNodeEntityData {
        CString TelemetryId; // 0x40
        Array<CString> Parameters; // 0x48
    }; // 0x50
    static_assert(sizeof(BFTelemetryStateNodeEntityData) == 0x50);
}
#pragma pack(pop)