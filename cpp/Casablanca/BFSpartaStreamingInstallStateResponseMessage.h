// Object: BFSpartaStreamingInstallStateResponseMessage
// ClassId: 4744
// RuntimeId: 65152
// TypeInfo: 0x0000000144C70B20
#include "../SpartaShared/SpartaPayload.h"
#include "../CasablancaShared/BFSpartaStreamingInstallStateData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaStreamingInstallStateResponseMessage : public SpartaShared::SpartaPayload {
        CasablancaShared::BFSpartaStreamingInstallStateData StreamingInstall; // 0x18
        Boolean IsValid; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(BFSpartaStreamingInstallStateResponseMessage) == 0x38);
}
#pragma pack(pop)