/* @cpp.file.header */

/*  _________        _____ __________________        _____
 *  __  ____/___________(_)______  /__  ____/______ ____(_)_______
 *  _  / __  __  ___/__  / _  __  / _  / __  _  __ `/__  / __  __ \
 *  / /_/ /  _  /    _  /  / /_/ /  / /_/ /  / /_/ / _  /  _  / / /
 *  \____/   /_/     /_/   \_,__/   \____/   \__,_/  /_/   /_/ /_/
 */

#ifndef GRIDHASHEABLEOBJECT_HPP_INCLUDED
#define GRIDHASHEABLEOBJECT_HPP_INCLUDED

#include <cstdint>
#include <vector>

#include <gridgain/gridconf.hpp>

/**
 *  Provide the unified interface for calculation the hash-code for an object.
 */
class GRIDGAIN_API GridClientHasheableObject {
public:
    /** Destructor. */
    virtual ~GridClientHasheableObject() {};

    /**
     * Calculates hash code for the contained object.
     *
     * @return Hash code.
     */
    virtual int32_t hashCode() const = 0;
};


#endif // GRIDHASHEABLEOBJECT_HPP_INCLUDED
