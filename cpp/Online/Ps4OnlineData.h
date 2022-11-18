// Object: Ps4OnlineData
// ClassId: 607
// RuntimeId: 33851
// TypeInfo: 0x0000000144F03290
#include "../Online/OnlinePlatformData.h"
#include "../Online/Ps4OnlineTitleData.h"

#pragma pack(push, 8)
namespace Online {
    class Ps4OnlineData : public Online::OnlinePlatformData {
        Online::Ps4OnlineTitleData DefaultTitleData; // 0x20
        Array<Online::Ps4OnlineTitleData> TitleData; // 0x30
    }; // 0x38
    static_assert(sizeof(Ps4OnlineData) == 0x38);
}
#pragma pack(pop)