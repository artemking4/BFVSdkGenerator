// Object: CasablancaSpartaInventoryChangedRime
// ClassId: 4788
// RuntimeId: 57922
// TypeInfo: 0x0000000144C72020
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaInventoryChangedRime : public SpartaShared::SpartaPayload {
        Boolean HasOnlineData; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(CasablancaSpartaInventoryChangedRime) == 0x20);
}
#pragma pack(pop)