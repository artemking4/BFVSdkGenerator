// Object: AvailableGameSizes
// ClassId: 1185
// RuntimeId: 40932
// TypeInfo: 0x0000000144D6DC30
#include "../Core/DataContainer.h"
#include "../CasablancaShared/AvailableGameSize.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AvailableGameSizes : public Core::DataContainer {
        Array<CasablancaShared::AvailableGameSize> GameSizes; // 0x18
    }; // 0x20
    static_assert(sizeof(AvailableGameSizes) == 0x20);
}
#pragma pack(pop)