// Object: CasablancaSpartaReceiveOffersMessage
// ClassId: 4799
// RuntimeId: 21869
// TypeInfo: 0x0000000144C749B0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Guid.h"
#include "../Casablanca/CasablancaSpartaOfferCollection.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaReceiveOffersMessage : public SpartaShared::SpartaPayload {
        Guid RequestId; // 0x18
        Array<Casablanca::CasablancaSpartaOfferCollection> FoundOffers; // 0x28
    }; // 0x30
    static_assert(sizeof(CasablancaSpartaReceiveOffersMessage) == 0x30);
}
#pragma pack(pop)