// Object: BFSpartaVoipSpeakerStatusChanged
// ClassId: 4750
// RuntimeId: 16539
// TypeInfo: 0x0000000144C6ECA0
#include "../SpartaShared/SpartaPayload.h"
#include "../Casablanca/BFSpartaVoipSpeakerInfo.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaVoipSpeakerStatusChanged : public SpartaShared::SpartaPayload {
        Array<Casablanca::BFSpartaVoipSpeakerInfo> SpeakerChanges; // 0x18
    }; // 0x20
    static_assert(sizeof(BFSpartaVoipSpeakerStatusChanged) == 0x20);
}
#pragma pack(pop)