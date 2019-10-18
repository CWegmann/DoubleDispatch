#ifndef SOLID_HPP
#define SOLID_HPP

class SolidAlgorithm;

class Solid{

public:
    virtual ~Solid() = default;

    virtual void accept(SolidAlgorithm& algorithm) const = 0;

};

#endif
