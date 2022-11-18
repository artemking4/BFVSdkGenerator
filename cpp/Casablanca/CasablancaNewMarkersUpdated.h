// Object: CasablancaNewMarkersUpdated
// ClassId: 4768
// RuntimeId: 48884
// TypeInfo: 0x0000000144C71B20
#include "../SpartaShared/SpartaPayload.h"
#include "../Casablanca/CasSpartaNewMarker.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaNewMarkersUpdated : public SpartaShared::SpartaPayload {
        Array<Casablanca::CasSpartaNewMarker> Updated; // 0x18
    }; // 0x20
    static_assert(sizeof(CasablancaNewMarkersUpdated) == 0x20);
}
#pragma pack(pop)