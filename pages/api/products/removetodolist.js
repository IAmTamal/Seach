import connectDb from "../../../middleware/db";
import Users from "../../../models/UserSchema";

const handler = async (req, res) => {
  const { email, note } = req.body;
  const newuser = {};

  await Users.findOneAndUpdate(
    {
      email: email,
    },
    {
      $pull: {
        todolist: note,
      },
    }
  );

  return res.status(200).json({ sucess: "sucess" });
};

export default connectDb(handler);
