// Object: AvailableMutator
// ClassId: 1186
// RuntimeId: 46989
// TypeInfo: 0x0000000144D6DEB0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../CasablancaShared/PrivateGamesMutatorType.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/AvailableIntValue.h"
#include "../CasablancaShared/AvailableFloatValue.h"
#include "../CasablancaShared/Metadata.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AvailableMutator : public Core::DataContainer {
        CString Name; // 0x18
        CString Category; // 0x20
        CasablancaShared::PrivateGamesMutatorType MutatorType; // 0x28
        char pad_0x2C[0x4];
        CasablancaShared::AvailableIntValue IntVal; // 0x30
        CasablancaShared::AvailableFloatValue FloatVal; // 0x50
        CString StringVal; // 0x70
        CasablancaShared::Metadata Metadata; // 0x78
        Boolean BoolVal; // 0x80
        char pad_0x81[0x7];
    }; // 0x88
    static_assert(sizeof(AvailableMutator) == 0x88);
}
#pragma pack(pop)