// Object: SpartaFeaturesPayload
// ClassId: 4818
// RuntimeId: 57347
// TypeInfo: 0x0000000144F50540
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaFeaturesPayload : public SpartaShared::SpartaPayload {
        Array<CString> EnabledFeatures; // 0x18
    }; // 0x20
    static_assert(sizeof(SpartaFeaturesPayload) == 0x20);
}
#pragma pack(pop)