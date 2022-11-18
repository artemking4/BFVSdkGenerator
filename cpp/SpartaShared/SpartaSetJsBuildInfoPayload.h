// Object: SpartaSetJsBuildInfoPayload
// ClassId: 4837
// RuntimeId: 44779
// TypeInfo: 0x0000000144F4FF40
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaSetJsBuildInfoPayload : public SpartaShared::SpartaPayload {
        CString Changelist; // 0x18
        CString Version; // 0x20
        CString GatewayUrl; // 0x28
    }; // 0x30
    static_assert(sizeof(SpartaSetJsBuildInfoPayload) == 0x30);
}
#pragma pack(pop)