// Object: CasablancaShowSocialMessage
// ClassId: 4770
// RuntimeId: 44844
// TypeInfo: 0x0000000144C71E20
#include "../SpartaShared/SpartaPayload.h"
#include "../Casablanca/CasablancaRimeScreen.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaShowSocialMessage : public SpartaShared::SpartaPayload {
        Casablanca::CasablancaRimeScreen CurrentRimeScreen; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(CasablancaShowSocialMessage) == 0x20);
}
#pragma pack(pop)