// Object: ContextSpecificModifierUnlock
// ClassId: 1430
// RuntimeId: 54580
// TypeInfo: 0x0000000144D40C50
#include "../Core/DataContainer.h"
#include "../Global/Guid.h"

namespace CasablancaShared {
    class ContextSpecificModifierUnlock : public Core::DataContainer {
        Guid UnlockAssetGuid; // 0x18
    }; // 0x28
    static_assert(sizeof(ContextSpecificModifierUnlock) == 0x28);
}