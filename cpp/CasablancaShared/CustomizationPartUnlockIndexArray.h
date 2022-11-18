// Object: CustomizationPartUnlockIndexArray
// ClassId: 1487
// RuntimeId: 13769
// TypeInfo: 0x0000000144D5A840
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CustomizationPartUnlockIndexArray : public Core::DataContainer {
        Array<Int32> UnlockIndicies; // 0x18
    }; // 0x20
    static_assert(sizeof(CustomizationPartUnlockIndexArray) == 0x20);
}
#pragma pack(pop)