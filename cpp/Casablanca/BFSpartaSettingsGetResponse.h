// Object: BFSpartaSettingsGetResponse
// ClassId: 4732
// RuntimeId: 42955
// TypeInfo: 0x0000000144C6F0A0
#include "../SpartaShared/SpartaPayload.h"
#include "../Casablanca/BFSpartaSetting.h"
#include "../Casablanca/SpartaSettingsResult.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaSettingsGetResponse : public SpartaShared::SpartaPayload {
        Array<Casablanca::BFSpartaSetting> Settings; // 0x18
        Casablanca::SpartaSettingsResult Result; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFSpartaSettingsGetResponse) == 0x28);
}
#pragma pack(pop)