// Object: BFSpartaStreamingInstallStateChangedMessage
// ClassId: 4743
// RuntimeId: 10461
// TypeInfo: 0x0000000144C70BA0
#include "../SpartaShared/SpartaPayload.h"
#include "../CasablancaShared/BFSpartaStreamingInstallStateData.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaStreamingInstallStateChangedMessage : public SpartaShared::SpartaPayload {
        CasablancaShared::BFSpartaStreamingInstallStateData StreamingInstall; // 0x18
    }; // 0x30
    static_assert(sizeof(BFSpartaStreamingInstallStateChangedMessage) == 0x30);
}
#pragma pack(pop)