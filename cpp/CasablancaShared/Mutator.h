// Object: Mutator
// ClassId: 4347
// RuntimeId: 20893
// TypeInfo: 0x0000000144D6E030
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../CasablancaShared/PrivateGamesMutatorBehaviour.h"
#include "../CasablancaShared/PrivateGamesMutatorType.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/Metadata.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class Mutator : public Core::DataContainer {
        CString Name; // 0x18
        CString Category; // 0x20
        CasablancaShared::PrivateGamesMutatorBehaviour Behaviour; // 0x28
        CasablancaShared::PrivateGamesMutatorType MutatorType; // 0x2C
        Int32 IntVal; // 0x30
        Float32 FloatVal; // 0x34
        CString StringVal; // 0x38
        CasablancaShared::Metadata Metadata; // 0x40
        Boolean Changed; // 0x48
        Boolean BoolVal; // 0x49
        char pad_0x4A[0x6];
    }; // 0x50
    static_assert(sizeof(Mutator) == 0x50);
}
#pragma pack(pop)