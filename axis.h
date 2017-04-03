class cc_axis_main
{
    public:

        // Accessors.
        float get_x() const;
        float get_y() const;
        float get_z() const;

        // Mutators.
        void set_x(float value);
        void set_y(float value);
        void set_z(float value);

    private:

        float x_m;    // Horizontal axis.     Higher = Right.         Lower = Left.
        float y_m;    // Vertical axis.       Higher = Upward.        Lower = Downward.
        float z_m;    // Lateral axis.        Higher = Toward view.   Lower = Away from view.
};
